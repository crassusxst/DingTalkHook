//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "Marshal.h"

@class DTSecurityInfoModel, NSArray, NSNumber, NSString;

@interface DTOACheckInLocModel : Marshal
{
    NSNumber *_lat;
    NSNumber *_lon;
    NSNumber *_accuracy;
    NSArray *_wifiList;
    NSNumber *_planId;
    NSString *_corpId;
    NSString *_deviceId;
    NSString *_umidToken;
    DTSecurityInfoModel *_securityParams;
}

@property(retain, nonatomic) DTSecurityInfoModel *securityParams; // @synthesize securityParams=_securityParams;
@property(copy, nonatomic) NSString *umidToken; // @synthesize umidToken=_umidToken;
@property(copy, nonatomic) NSString *deviceId; // @synthesize deviceId=_deviceId;
@property(copy, nonatomic) NSString *corpId; // @synthesize corpId=_corpId;
@property(retain, nonatomic) NSNumber *planId; // @synthesize planId=_planId;
@property(copy, nonatomic) NSArray *wifiList; // @synthesize wifiList=_wifiList;
@property(retain, nonatomic) NSNumber *accuracy; // @synthesize accuracy=_accuracy;
@property(retain, nonatomic) NSNumber *lon; // @synthesize lon=_lon;
@property(retain, nonatomic) NSNumber *lat; // @synthesize lat=_lat;
- (void).cxx_destruct;
- (id)filedsMeta__;
- (id)init;

@end

