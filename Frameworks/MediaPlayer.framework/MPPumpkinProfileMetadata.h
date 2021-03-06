/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@interface MPPumpkinProfileMetadata : NSObject <NSCopying, NSSecureCoding> {
    NSDictionary * _pumpkinProfileDictionary;
}

@property (nonatomic, readonly, copy) NSString *biography;
@property (nonatomic, readonly, copy) NSString *handle;
@property (nonatomic, readonly) BOOL hasCurrentUserRequestedToFollowOwner;
@property (nonatomic, readonly) BOOL hasOwnerRequestedToFollowCurrentUser;
@property (nonatomic, readonly) BOOL isFollowable;
@property (nonatomic, readonly) BOOL isOwnerFollowedByCurrentUser;
@property (nonatomic, readonly) BOOL isPrivate;
@property (nonatomic, readonly, copy) NSString *name;
@property (nonatomic, readonly) int numberOfFollowees;
@property (nonatomic, readonly) int numberOfFollowers;
@property (nonatomic, readonly, copy) NSDictionary *owner;
@property (nonatomic, readonly, copy) id storeID;
@property (nonatomic, readonly, copy) NSString *type;

+ (BOOL)supportsSecureCoding;

- (void).cxx_destruct;
- (id)artworkRequestToken;
- (id)biography;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)handle;
- (BOOL)hasCurrentUserRequestedToFollowOwner;
- (BOOL)hasOwnerRequestedToFollowCurrentUser;
- (id)initWithCoder:(id)arg1;
- (id)initWithPumpkinProfileDictionary:(id)arg1;
- (BOOL)isFollowable;
- (BOOL)isOwnerFollowedByCurrentUser;
- (BOOL)isPrivate;
- (id)name;
- (int)numberOfFollowees;
- (int)numberOfFollowers;
- (id)owner;
- (id)storeID;
- (id)type;

@end
