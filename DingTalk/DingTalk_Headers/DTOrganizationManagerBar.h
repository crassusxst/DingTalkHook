//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "DTSingleLineShowingCell.h"

@interface DTOrganizationManagerBar : DTSingleLineShowingCell
{
    long long _orgId;
}

@property(nonatomic) long long orgId; // @synthesize orgId=_orgId;
- (id)managerIconImage;
- (id)managerString;
- (void)didTapOnManagerBarManage;
- (void)didTapOnManagerBarAdd;
- (void)updateManagerBar;
- (id)initWithOrganizationId:(long long)arg1;

@end

