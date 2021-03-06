//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class DTMenuItem, UIButton, UIImageView, UILabel;

@interface DTMenuViewCell : UIView
{
    UIImageView *_superscript;
    UIButton *_icon;
    UILabel *_title;
    DTMenuItem *_item;
    CDUnknownBlockType _clickBlock;
}

+ (id)menuViewCellWithMenuItem:(id)arg1 needScaleInPad:(_Bool)arg2;
+ (id)menuViewCellWithFrame:(struct CGRect)arg1 WithMenuItem:(id)arg2;
@property(copy, nonatomic) CDUnknownBlockType clickBlock; // @synthesize clickBlock=_clickBlock;
@property(retain, nonatomic) DTMenuItem *item; // @synthesize item=_item;
@property(retain, nonatomic) UILabel *title; // @synthesize title=_title;
@property(retain, nonatomic) UIButton *icon; // @synthesize icon=_icon;
@property(retain, nonatomic) UIImageView *superscript; // @synthesize superscript=_superscript;
- (void).cxx_destruct;
- (id)accessibilityLabel;
- (_Bool)isAccessibilityElement;
- (void)setLongPress:(SEL)arg1 target:(id)arg2;
- (void)buttonRelease:(id)arg1;
- (void)buttonPress:(id)arg1;
- (void)clickAction;
- (void)setClick:(SEL)arg1 target:(id)arg2;
- (void)loadView;
- (id)initWithMenuItem:(id)arg1 needScaleInPad:(_Bool)arg2;
- (id)initWithFrame:(struct CGRect)arg1 WithMenuItem:(id)arg2;

@end

