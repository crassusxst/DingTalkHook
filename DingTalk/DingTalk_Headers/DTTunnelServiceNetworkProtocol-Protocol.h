//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class DTIsvHttpRequest, NSString;

@protocol DTTunnelServiceNetworkProtocol <NSObject>
- (void)querySafeTunnelDomains:(void (^)(NSArray *))arg1 failureBlock:(void (^)(DTError *))arg2;
- (void)exchangeChannelMtop:(NSString *)arg1 successBlock:(void (^)(NSString *))arg2 failureBlock:(void (^)(DTError *))arg3;
- (void)exchangeChannelHttpOverLwp:(DTIsvHttpRequest *)arg1 successBlock:(void (^)(DTIsvHttpResponse *))arg2 failureBlock:(void (^)(DTError *))arg3;
@end

