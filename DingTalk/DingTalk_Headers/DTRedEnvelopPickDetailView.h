//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "DTRedEnvelopDescActionViewDelegate-Protocol.h"

@class DTAmountLabel, DTRedEnvelopDescActionView, DTRedEnvelopPickDetailViewItem, DTRedEnvelopThankTipView, FLAnimatedImageView, NSString, UIButton, UIImageView, UILabel;

@interface DTRedEnvelopPickDetailView : UIView <DTRedEnvelopDescActionViewDelegate>
{
    DTRedEnvelopPickDetailViewItem *_item;
    UIImageView *_bgImageView;
    UILabel *_sourceNameLabel;
    FLAnimatedImageView *_themeImageView;
    DTAmountLabel *_priceLabel;
    DTRedEnvelopDescActionView *_descActionView;
    UILabel *_saySomethingLabel;
    UIButton *_showDetailButton;
    UIImageView *_iconRightImageView;
    DTRedEnvelopThankTipView *_topTipView;
}

@property(retain, nonatomic) DTRedEnvelopThankTipView *topTipView; // @synthesize topTipView=_topTipView;
@property(retain, nonatomic) UIImageView *iconRightImageView; // @synthesize iconRightImageView=_iconRightImageView;
@property(retain, nonatomic) UIButton *showDetailButton; // @synthesize showDetailButton=_showDetailButton;
@property(retain, nonatomic) UILabel *saySomethingLabel; // @synthesize saySomethingLabel=_saySomethingLabel;
@property(retain, nonatomic) DTRedEnvelopDescActionView *descActionView; // @synthesize descActionView=_descActionView;
@property(retain, nonatomic) DTAmountLabel *priceLabel; // @synthesize priceLabel=_priceLabel;
@property(retain, nonatomic) FLAnimatedImageView *themeImageView; // @synthesize themeImageView=_themeImageView;
@property(retain, nonatomic) UILabel *sourceNameLabel; // @synthesize sourceNameLabel=_sourceNameLabel;
@property(retain, nonatomic) UIImageView *bgImageView; // @synthesize bgImageView=_bgImageView;
@property(retain, nonatomic) DTRedEnvelopPickDetailViewItem *item; // @synthesize item=_item;
- (void).cxx_destruct;
- (void)didClickMyWallet:(id)arg1;
- (void)showDetail;
- (void)configWithItem:(id)arg1;
- (void)loadThankTips;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

