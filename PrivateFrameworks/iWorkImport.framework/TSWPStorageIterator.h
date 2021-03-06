/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSWPStorageIterator : NSObject {
    unsigned int  _charIndex;
    BOOL  _lastEventWasMarker;
    NSMutableArray * _locationProviders;
    NSCharacterSet * _markers;
    NSMutableArray * _pendingEvents;
    NSMutableArray * _rangeProviders;
    BOOL  _sendEventsForNilObjects;
    unsigned int  _startCharIndex;
    TSWPStorage * _storage;
}

@property (nonatomic, retain) NSCharacterSet *markers;

- (void)addAttributeRangeProvider:(int)arg1;
- (void)addLocationProvider:(id)arg1;
- (void)addRangeProvider:(id)arg1;
- (void)dealloc;
- (id)description;
- (id)initWithStorage:(id)arg1;
- (id)markers;
- (id)nextEvent;
- (void)p_emitEventForMarkerCharacter:(unsigned short)arg1 atIndex:(unsigned int)arg2;
- (void)p_emitEventWithType:(int)arg1 provider:(id)arg2 range:(struct _NSRange { unsigned int x1; unsigned int x2; })arg3 object:(id)arg4;
- (void)p_emitPendingCharactersAndEvent:(id)arg1;
- (void)p_forceRangeEndForProvider:(id)arg1 providerIndex:(unsigned int)arg2 atCharIndex:(unsigned int)arg3;
- (void)setMarkers:(id)arg1;

@end
