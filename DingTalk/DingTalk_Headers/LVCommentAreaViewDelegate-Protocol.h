//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class UIView;
@protocol LVCommentAreaViewProtocol;

@protocol LVCommentAreaViewDelegate <NSObject>
- (void)lv_commentAreaView:(UIView<LVCommentAreaViewProtocol> *)arg1 didChangeHeight:(float)arg2;
- (_Bool)lv_textFieldShouldBeginEditing:(UIView<LVCommentAreaViewProtocol> *)arg1;
- (_Bool)lv_textFieldShouldReturn:(UIView<LVCommentAreaViewProtocol> *)arg1;
@end

