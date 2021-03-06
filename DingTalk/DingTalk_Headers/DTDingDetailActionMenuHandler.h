//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "DTDingCommentHandler.h"

#import "UIAlertViewDelegate-Protocol.h"

@class DTActionMenuBar, NSDictionary, NSString;

@interface DTDingDetailActionMenuHandler : DTDingCommentHandler <UIAlertViewDelegate>
{
    NSDictionary *_menuItemTitleTable;
    _Bool _hasRequest;
    DTActionMenuBar *_actionMenuBar;
    CDUnknownBlockType _applyComment;
    CDUnknownBlockType _dingStatusDidChangeBlock;
    CDUnknownBlockType _confirmationBlock;
}

@property(copy, nonatomic) CDUnknownBlockType confirmationBlock; // @synthesize confirmationBlock=_confirmationBlock;
@property(copy, nonatomic) CDUnknownBlockType dingStatusDidChangeBlock; // @synthesize dingStatusDidChangeBlock=_dingStatusDidChangeBlock;
@property(copy, nonatomic) CDUnknownBlockType applyComment; // @synthesize applyComment=_applyComment;
@property(readonly, nonatomic) DTActionMenuBar *actionMenuBar; // @synthesize actionMenuBar=_actionMenuBar;
- (void).cxx_destruct;
- (void)alertView:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)notifyReloadDing;
- (void)showRequestErrorMessage:(id)arg1;
- (void)didStopRequest;
- (void)willStartRequest;
- (void)updateConferenceDingInvitationStatusWithTag:(long long)arg1 reason:(id)arg2;
- (void)updateTaskDingCloseStatus;
- (void)updateTaskDingCompleteStatus;
- (void)showAlertWithTitle:(id)arg1 message:(id)arg2 cancelButtonTitle:(id)arg3 confirmButtonTitle:(id)arg4 isAllowedInput:(_Bool)arg5 completion:(CDUnknownBlockType)arg6;
- (void)showConfirmInfoWithTag:(long long)arg1 completion:(CDUnknownBlockType)arg2;
- (void)changeConferenceDingStatusWithTag:(long long)arg1;
- (void)didTapActionButton:(id)arg1;
- (id)actionButtonWithTitle:(id)arg1;
- (id)titleFromMenuItemTag:(long long)arg1;
- (id)actionMenuItemWithTag:(long long)arg1;
- (_Bool)isDisabledMenuWithTag:(long long)arg1;
- (id)actionMenuItemsWithTags:(id)arg1;
- (id)buildActionMenuItemsWithDingModel:(id)arg1;
- (void)notifyDidFinishUpdateDingStatus;
- (void)reloadActionMenuBar;
- (void)disposeActionMenuBar;
- (void)changeActionMenuBarHidden:(_Bool)arg1;
- (_Bool)actionMenuBarVisible;
- (void)setupActionMenuBar;
- (_Bool)isAllowedShowActionMenu;
- (id)currentDingModel;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

