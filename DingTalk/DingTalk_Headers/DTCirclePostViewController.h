//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "DTUITableViewController.h"

#import "MWPhotoBrowserDelegate-Protocol.h"

@class DTCircleLinkContentModel, DTCirclePostPageImagesCell, NSArray, NSString;
@protocol DTOrganization;

@interface DTCirclePostViewController : DTUITableViewController <MWPhotoBrowserDelegate>
{
    CDUnknownBlockType _postSuccessCallback;
    long long _postMode;
    NSString *_inputText;
    NSArray *_selectedImageObjects;
    DTCircleLinkContentModel *_linkContentModel;
    id <DTOrganization> _selectedOrganization;
    DTCirclePostPageImagesCell *_selectedImageContainerCell;
}

@property(nonatomic) __weak DTCirclePostPageImagesCell *selectedImageContainerCell; // @synthesize selectedImageContainerCell=_selectedImageContainerCell;
@property(retain, nonatomic) id <DTOrganization> selectedOrganization; // @synthesize selectedOrganization=_selectedOrganization;
@property(copy, nonatomic) DTCircleLinkContentModel *linkContentModel; // @synthesize linkContentModel=_linkContentModel;
@property(copy, nonatomic) NSArray *selectedImageObjects; // @synthesize selectedImageObjects=_selectedImageObjects;
@property(copy, nonatomic) NSString *inputText; // @synthesize inputText=_inputText;
@property(nonatomic) long long postMode; // @synthesize postMode=_postMode;
@property(copy, nonatomic) CDUnknownBlockType postSuccessCallback; // @synthesize postSuccessCallback=_postSuccessCallback;
- (void).cxx_destruct;
- (id)shareLinkCellWithTableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (id)shareToCellWithTableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (id)selectedImageOrVideoContainerCellWithTableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (id)inputCellWithTableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (id)photoBrowser:(id)arg1 titleForPhotoAtIndex:(unsigned long long)arg2;
- (id)photoBrowser:(id)arg1 photoAtIndex:(unsigned long long)arg2;
- (unsigned long long)numberOfPhotosInPhotoBrowser:(id)arg1;
- (void)saveImageObjects:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)addImageObjects:(id)arg1;
- (void)saveImageObjects:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (void)registerCells;
- (id)defaultGrayOrganization;
- (void)postButtonDidTapHandler:(id)arg1;
- (_Bool)checkSelectedImageSaved;
- (void)updateSendButtonEnabled;
- (void)setupBarButtonItems;
- (void)setupTableView;
- (void)dt_safeAreaInsetsDidChange:(struct UIEdgeInsets)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)saveInputText;
- (id)initWithShareLinkUserInfo:(id)arg1;
- (id)initWithInputText:(id)arg1 selectedImageObjects:(id)arg2;
- (id)initWithInputText:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (id)initWithStyle:(long long)arg1;
- (id)initWithPostMode:(long long)arg1 inputText:(id)arg2 selectedImageObjects:(id)arg3 shareLinkUserInfo:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

