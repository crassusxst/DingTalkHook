//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "PMBaseMessage.h"

@class NSArray, NSData, NSString;

@interface PMBaseInfoMsg : PMBaseMessage
{
    _Bool _sendFullTags;
    NSArray *_sendTags;
    NSString *_from;
    NSString *_to;
    long long _timestamp;
    NSData *_data;
}

@property(retain, nonatomic) NSData *data; // @synthesize data=_data;
@property(nonatomic) long long timestamp; // @synthesize timestamp=_timestamp;
@property(retain, nonatomic) NSString *to; // @synthesize to=_to;
@property(retain, nonatomic) NSString *from; // @synthesize from=_from;
@property(retain, nonatomic) NSArray *sendTags; // @synthesize sendTags=_sendTags;
@property(nonatomic) _Bool sendFullTags; // @synthesize sendFullTags=_sendFullTags;
- (void).cxx_destruct;
- (long long)fromProtocolItem:(id)arg1;
- (id)toProtocolItem;

@end

