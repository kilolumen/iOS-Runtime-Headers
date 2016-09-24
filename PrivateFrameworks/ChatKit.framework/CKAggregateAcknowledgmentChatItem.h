/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

@interface CKAggregateAcknowledgmentChatItem : CKAssociatedMessageChatItem {
    int  _latestAcknowledgmentType;
}

@property (readonly) UIColor *acknowledgmentImageColor;
@property (readonly, copy) NSString *acknowledgmentImageName;
@property (nonatomic, readonly, copy) NSArray *acknowledgments;
@property (nonatomic, readonly) BOOL balloonOrientation;
@property (readonly) Class balloonViewClass;
@property (nonatomic, readonly) BOOL includesFromMe;
@property (nonatomic, readonly) BOOL includesMultiple;
@property (nonatomic, readonly) int latestAcknowledgmentType;
@property (nonatomic, readonly) BOOL latestIsFromMe;

- (id)_imAggregateAcknowledgmentChatItem;
- (id)acknowledgmentImageColor;
- (id)acknowledgmentImageName;
- (id)acknowledgments;
- (id)associatedChatItemGUID;
- (BOOL)balloonOrientation;
- (Class)balloonViewClass;
- (Class)cellClass;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })contentInsets;
- (BOOL)includesFromMe;
- (BOOL)includesMultiple;
- (id)initWithIMChatItem:(id)arg1 maxWidth:(float)arg2;
- (BOOL)isEqual:(id)arg1;
- (int)latestAcknowledgmentType;
- (BOOL)latestIsFromMe;
- (struct CGSize { double x1; double x2; })loadSizeThatFits:(struct CGSize { double x1; double x2; })arg1 textAlignmentInsets:(out struct UIEdgeInsets { double x1; double x2; double x3; double x4; }*)arg2;
- (BOOL)transcriptOrientation;

@end