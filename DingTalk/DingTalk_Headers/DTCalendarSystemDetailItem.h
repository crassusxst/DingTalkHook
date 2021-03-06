//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "DTBaseCellItem.h"

@class EKEvent, NSArray, NSString;

@interface DTCalendarSystemDetailItem : DTBaseCellItem
{
    EKEvent *_event;
    NSString *_title;
    NSArray *_contentList;
    NSString *_source;
}

+ (id)sourceFont;
+ (id)contentFont;
+ (id)titleFont;
+ (id)buildWithEvent:(id)arg1;
@property(copy, nonatomic) NSString *source; // @synthesize source=_source;
@property(copy, nonatomic) NSArray *contentList; // @synthesize contentList=_contentList;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(retain, nonatomic) EKEvent *event; // @synthesize event=_event;
- (void).cxx_destruct;
- (double)heightForCell;
- (id)cellForItem;
- (id)reuseIdentifier;

@end

