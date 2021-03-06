//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSString, UIColor, UIFont, UIImage;

@interface DTSwitchButtonItem : NSObject
{
    _Bool _imageClickAnimation;
    _Bool _highlight;
    _Bool _adjustsFontSizeToFitWidth;
    unsigned long long _index;
    UIColor *_textNormalColor;
    UIColor *_textHighlightColor;
    UIFont *_textFont;
    UIImage *_iconNormalImage;
    UIImage *_iconHighlightImage;
    NSString *_text;
}

+ (id)buildWithIndex:(unsigned long long)arg1 imageClickAnimation:(_Bool)arg2 textNormalColor:(id)arg3 textHighlightColor:(id)arg4 textFont:(id)arg5 iconNormalImage:(id)arg6 iconHighlightImage:(id)arg7 text:(id)arg8 highlight:(_Bool)arg9;
@property(nonatomic) _Bool adjustsFontSizeToFitWidth; // @synthesize adjustsFontSizeToFitWidth=_adjustsFontSizeToFitWidth;
@property(nonatomic) _Bool highlight; // @synthesize highlight=_highlight;
@property(copy, nonatomic) NSString *text; // @synthesize text=_text;
@property(retain, nonatomic) UIImage *iconHighlightImage; // @synthesize iconHighlightImage=_iconHighlightImage;
@property(retain, nonatomic) UIImage *iconNormalImage; // @synthesize iconNormalImage=_iconNormalImage;
@property(retain, nonatomic) UIFont *textFont; // @synthesize textFont=_textFont;
@property(retain, nonatomic) UIColor *textHighlightColor; // @synthesize textHighlightColor=_textHighlightColor;
@property(retain, nonatomic) UIColor *textNormalColor; // @synthesize textNormalColor=_textNormalColor;
@property(nonatomic) _Bool imageClickAnimation; // @synthesize imageClickAnimation=_imageClickAnimation;
@property(nonatomic) unsigned long long index; // @synthesize index=_index;
- (void).cxx_destruct;
- (struct CGSize)buttonSize:(double)arg1 maxHeight:(double)arg2;

@end

