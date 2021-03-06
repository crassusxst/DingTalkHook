//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class UIColor, UIFont;

@interface DTMessageBubbleTextStyle : NSObject
{
    _Bool _supportEmojiAutoScale;
    UIColor *_textColor;
    UIColor *_normalLinkColor;
    UIColor *_backgroundFillColor;
    long long _textAlignment;
    UIFont *_textFont;
    long long _lineSpace;
}

+ (id)textStyleWithTextColor:(id)arg1 normalLinkColor:(id)arg2 backgroundFillColor:(id)arg3 textAlignment:(long long)arg4 textFont:(id)arg5;
@property(nonatomic) _Bool supportEmojiAutoScale; // @synthesize supportEmojiAutoScale=_supportEmojiAutoScale;
@property(nonatomic) long long lineSpace; // @synthesize lineSpace=_lineSpace;
@property(retain, nonatomic) UIFont *textFont; // @synthesize textFont=_textFont;
@property(nonatomic) long long textAlignment; // @synthesize textAlignment=_textAlignment;
@property(retain, nonatomic) UIColor *backgroundFillColor; // @synthesize backgroundFillColor=_backgroundFillColor;
@property(retain, nonatomic) UIColor *normalLinkColor; // @synthesize normalLinkColor=_normalLinkColor;
@property(retain, nonatomic) UIColor *textColor; // @synthesize textColor=_textColor;
- (void).cxx_destruct;
- (id)init;

@end

