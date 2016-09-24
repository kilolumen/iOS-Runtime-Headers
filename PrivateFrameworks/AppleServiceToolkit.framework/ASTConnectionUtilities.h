/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AppleServiceToolkit.framework/AppleServiceToolkit
 */

@interface ASTConnectionUtilities : NSObject

+ (id)MD5ForData:(id)arg1;
+ (id)MD5ForFileURL:(id)arg1;
+ (id)MD5HeaderValueForTask:(id)arg1;
+ (id)acceptLanguage;
+ (void)addBodyToRequest:(id)arg1 body:(id)arg2 gzip:(BOOL)arg3;
+ (void)addStandardHeadersToRequest:(id)arg1 sessionID:(id)arg2;
+ (id)customServerEntry;
+ (BOOL)didEncounterNetworkDisconnectionError:(id)arg1;
+ (id)getRequestForEndpoint:(id)arg1 sessionID:(id)arg2;
+ (id)getServerLoggingSelection;
+ (BOOL)isGzipEnabled;
+ (BOOL)isValidResponse:(id)arg1;
+ (id)jsonSerializeObject:(id)arg1 error:(id*)arg2;
+ (id)parseJSONResponseWithData:(id)arg1 error:(id*)arg2;
+ (id)postRequestForEndpoint:(id)arg1 fileURL:(id)arg2 fileSequence:(id)arg3 totalFiles:(id)arg4 sessionID:(id)arg5;
+ (id)postRequestForEndpoint:(id)arg1 sessionID:(id)arg2;
+ (id)postRequestForEndpoint:(id)arg1 sessionID:(id)arg2 timeout:(double)arg3;
+ (BOOL)relaxTimeouts;
+ (unsigned int)rootOfTrust;
+ (unsigned int)serverSelection;
+ (id)serverURL;
+ (BOOL)trustIsValidWithProtectionSpace:(id)arg1 rootOfTrust:(unsigned int)arg2;
+ (BOOL)useChunkedTransferEncoding;
+ (id)uuidHashFromString:(id)arg1;

@end