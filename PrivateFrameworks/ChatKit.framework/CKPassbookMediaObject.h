/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

@class UIImage, PKPass;

@interface CKPassbookMediaObject : CKMediaObject  {
    PKPass *_pass;
    UIImage *_icon;
}

@property(retain) PKPass * pass;
@property(retain) UIImage * icon;

+ (id)mimeTypesToFileExtensions;

- (id)icon;
- (void)dealloc;
- (int)mediaType;
- (id)subtitle;
- (void)setIcon:(id)arg1;
- (id)title;
- (void)setPass:(id)arg1;
- (id)pass;

@end