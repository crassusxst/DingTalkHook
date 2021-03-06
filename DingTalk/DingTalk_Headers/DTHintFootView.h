//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class UIImageView, UILabel;

@interface DTHintFootView : UIView
{
    UIImageView *_leftLine;
    UIImageView *_rightLine;
    UILabel *_hintLabel;
}

+ (id)sectionFootTitle;
@property(retain, nonatomic) UILabel *hintLabel; // @synthesize hintLabel=_hintLabel;
@property(retain, nonatomic) UIImageView *rightLine; // @synthesize rightLine=_rightLine;
@property(retain, nonatomic) UIImageView *leftLine; // @synthesize leftLine=_leftLine;
- (void).cxx_destruct;
- (void)configWithHintString:(id)arg1;
- (void)layoutSubviews;
- (void)loadComponents;
- (id)initWithFrame:(struct CGRect)arg1;

@end

