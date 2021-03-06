//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "ISecurityGuardSafeToken-Protocol.h"

@class NSString;

@interface SecurityGuardSafeToken : NSObject <ISecurityGuardSafeToken>
{
}

- (Class)getMetaClass;
- (id)signWithToken:(id)arg1 inputData:(id)arg2 flag:(int)arg3;
- (id)decryptWithToken:(id)arg1 inputData:(id)arg2 flag:(int)arg3;
- (id)encryptWithToken:(id)arg1 inputData:(id)arg2 flag:(int)arg3;
- (void)removeToken:(id)arg1;
- (_Bool)isTokenExist:(id)arg1;
- (_Bool)saveToken:(id)arg1 forKey:(id)arg2 additional:(id)arg3 flag:(int)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

