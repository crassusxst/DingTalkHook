//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "NSCoding-Protocol.h"
#import "NSCopying-Protocol.h"

@class NSData, NSDate, NSHTTPURLResponse;

@interface LWUrlCacheItem : NSObject <NSCoding, NSCopying>
{
    _Bool _dingTalkCache;
    NSHTTPURLResponse *_response;
    NSData *_responseData;
    long long _dataLength;
    NSDate *_cacheDate;
}

+ (id)cacheItemWithHTTPURLResponse:(id)arg1 responseData:(id)arg2 cacheDate:(id)arg3 dingTalkCache:(_Bool)arg4;
@property(nonatomic) _Bool dingTalkCache; // @synthesize dingTalkCache=_dingTalkCache;
@property(retain, nonatomic) NSDate *cacheDate; // @synthesize cacheDate=_cacheDate;
@property(nonatomic) long long dataLength; // @synthesize dataLength=_dataLength;
@property(retain, nonatomic) NSData *responseData; // @synthesize responseData=_responseData;
@property(retain, nonatomic) NSHTTPURLResponse *response; // @synthesize response=_response;
- (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)dateFromHttpDateString:(id)arg1;
- (id)createDateFormatter:(id)arg1;
- (id)queryString:(id)arg1 key:(id)arg2;
- (_Bool)validCacheItem;

@end

