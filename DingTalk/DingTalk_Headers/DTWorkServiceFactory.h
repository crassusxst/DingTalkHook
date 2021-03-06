//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class DTBeaconServiceIMP, DTChannelServiceIMP, DTCheckInRecordServiceIMP, DTTunnelServiceIMP, DTWorkKVStorageIMP;

@interface DTWorkServiceFactory : NSObject
{
    DTChannelServiceIMP *_channelServiceIMP;
    DTBeaconServiceIMP *_beaconServiceIMP;
    DTTunnelServiceIMP *_tunnelServiceIMP;
    DTWorkKVStorageIMP *_workKVStorageIMP;
    DTCheckInRecordServiceIMP *_checkInRecordServiceIMP;
}

+ (id)createCheckInRecordServiceIMP;
+ (id)createWorkKVStorageIMP;
+ (id)createTunnelServiceIMP;
+ (id)createBeaconServiceIMP;
+ (id)createChannelServiceIMP;
+ (id)sharedFactory;
@property(retain, nonatomic) DTCheckInRecordServiceIMP *checkInRecordServiceIMP; // @synthesize checkInRecordServiceIMP=_checkInRecordServiceIMP;
@property(retain, nonatomic) DTWorkKVStorageIMP *workKVStorageIMP; // @synthesize workKVStorageIMP=_workKVStorageIMP;
@property(retain, nonatomic) DTTunnelServiceIMP *tunnelServiceIMP; // @synthesize tunnelServiceIMP=_tunnelServiceIMP;
@property(retain, nonatomic) DTBeaconServiceIMP *beaconServiceIMP; // @synthesize beaconServiceIMP=_beaconServiceIMP;
@property(retain, nonatomic) DTChannelServiceIMP *channelServiceIMP; // @synthesize channelServiceIMP=_channelServiceIMP;
- (void).cxx_destruct;
- (void)onAccountLogoutNotification:(id)arg1;
- (void)onAccountLoginNotification:(id)arg1;
- (id)defaultCheckInRecordServiceIMP;
- (id)defaultWorkKVStorageIMP;
- (id)defaultTunnelServiceIMP;
- (id)defaultBeaconServiceIMP;
- (id)defaultChannelServiceIMP;
- (void)addNotificationObservers;
- (id)init;
- (void)dealloc;

@end

