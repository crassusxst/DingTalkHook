//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class DTProgressSliderHolder, UITouch;

@protocol DTProgressSliderHolderDelegate <NSObject>

@optional
- (void)sliderWillMove:(DTProgressSliderHolder *)arg1 withTouch:(UITouch *)arg2;
- (void)sliderDidCancelDragging:(DTProgressSliderHolder *)arg1;
- (void)sliderDidFinishDragging:(DTProgressSliderHolder *)arg1;
- (void)sliderDidBeginDragging:(DTProgressSliderHolder *)arg1 withTouch:(UITouch *)arg2;
@end

