//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class DTBizRedEnvelopDetailViewModel, NSString, UIView;

@protocol DTViewLuckyMoneyViewController <NSObject>
- (NSString *)titleForHeaderInLuckyMoneyFlow;
- (void)fillData:(DTBizRedEnvelopDetailViewModel *)arg1;
- (double)readjustTableFooterView;
- (double)readjustTableHeaderView;
- (UIView *)tableFooterView;
- (UIView *)tableHeaderView;

@optional
- (void)performHeaderAnimationAfterPick;
- (void)performHeaderAnimationWhenPick;
- (UIView *)viewForHeaderInLuckyMoneyFlow;
@end

