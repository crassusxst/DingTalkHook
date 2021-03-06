//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "Marshal.h"

@class NSNumber, NSString;

@interface DTCustomEmotionModel : Marshal
{
    NSNumber *_emotionId;
    NSString *_emotionName;
    NSString *_emotionMediaId;
    NSNumber *_emotionMediaSize;
    NSString *_emotionMediaSource;
    NSString *_authMediaId;
    NSString *_authCode;
}

@property(copy, nonatomic) NSString *authCode; // @synthesize authCode=_authCode;
@property(copy, nonatomic) NSString *authMediaId; // @synthesize authMediaId=_authMediaId;
@property(copy, nonatomic) NSString *emotionMediaSource; // @synthesize emotionMediaSource=_emotionMediaSource;
@property(retain, nonatomic) NSNumber *emotionMediaSize; // @synthesize emotionMediaSize=_emotionMediaSize;
@property(copy, nonatomic) NSString *emotionMediaId; // @synthesize emotionMediaId=_emotionMediaId;
@property(copy, nonatomic) NSString *emotionName; // @synthesize emotionName=_emotionName;
@property(retain, nonatomic) NSNumber *emotionId; // @synthesize emotionId=_emotionId;
- (void).cxx_destruct;
- (id)filedsMeta__;
- (id)init;

@end

