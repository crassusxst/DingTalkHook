//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class DTWebAnimatedImageView, NSString, NSURL;

@protocol DTMessageBubbleAttachmentActionCardViewProtocol <NSObject>

@optional
- (void)actionCardFullLongPress;
- (void)actionCardFullCardURLDidClick:(NSURL *)arg1;
- (void)actionCardActionButtonDidClick:(NSURL *)arg1;
- (void)actionCardMarkdownViewDidClickImage:(DTWebAnimatedImageView *)arg1 mediaId:(NSString *)arg2;
- (void)actionCardMarkdownViewDidClickLink:(NSURL *)arg1;
@end

