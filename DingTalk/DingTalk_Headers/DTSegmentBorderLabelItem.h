//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class DTSegmentBorderStyle, NSArray, NSString;

@interface DTSegmentBorderLabelItem : NSObject
{
    DTSegmentBorderStyle *_borderStyle;
    NSArray *_borderRangeArray;
    NSString *_text;
    long long _textAlignment;
}

@property(nonatomic) long long textAlignment; // @synthesize textAlignment=_textAlignment;
@property(copy, nonatomic) NSString *text; // @synthesize text=_text;
@property(copy, nonatomic) NSArray *borderRangeArray; // @synthesize borderRangeArray=_borderRangeArray;
@property(retain, nonatomic) DTSegmentBorderStyle *borderStyle; // @synthesize borderStyle=_borderStyle;
- (void).cxx_destruct;
- (id)attrbuteString;

@end

