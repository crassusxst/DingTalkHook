//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "DTTableViewController.h"

@class DTEmptyResultView, DTExternalContact, UIActivityIndicatorView;

@interface DTExternalPermissionListViewController : DTTableViewController
{
    DTExternalContact *_externalContact;
    CDUnknownBlockType _ExternalContactDidChange;
    UIActivityIndicatorView *_indicatorView;
    DTEmptyResultView *_emptyView;
}

@property(retain, nonatomic) DTEmptyResultView *emptyView; // @synthesize emptyView=_emptyView;
@property(retain, nonatomic) UIActivityIndicatorView *indicatorView; // @synthesize indicatorView=_indicatorView;
@property(copy, nonatomic) CDUnknownBlockType ExternalContactDidChange; // @synthesize ExternalContactDidChange=_ExternalContactDidChange;
@property(retain, nonatomic) DTExternalContact *externalContact; // @synthesize externalContact=_externalContact;
- (void).cxx_destruct;
- (id)keysWithDepartments:(id)arg1;
- (id)keysWithPersons:(id)arg1;
- (void)shareToColleages;
- (void)changeFollower;
- (void)settingButtonPressed:(id)arg1;
- (void)removePersonOrDepartmentItem:(id)arg1 cell:(id)arg2;
- (void)gotoProfileWithUid:(long long)arg1 staffId:(id)arg2 orgId:(long long)arg3;
- (id)contactPickCellItemWithDepartment:(id)arg1;
- (id)contactPickCellItemWithEnterpriseCard:(id)arg1 isFollower:(_Bool)arg2;
- (id)addSharedCellItem;
- (id)addFollowerCellItem;
- (void)showsEmptyPage;
- (void)showsExternalContactPermissions:(id)arg1;
- (void)loadDatasource;
- (void)loadComponent;
- (void)viewDidLoad;

@end

