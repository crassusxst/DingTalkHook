//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "DTTableViewController.h"

@class DTSingleLineShowingCellItem, NSArray, NSString;

@interface DTMailSignaturePhraseViewController : DTTableViewController
{
    NSString *_selectedPhrase;
    CDUnknownBlockType _changedBlock;
    NSArray *_phraseArray;
    DTSingleLineShowingCellItem *_selectedItem;
}

@property(retain, nonatomic) DTSingleLineShowingCellItem *selectedItem; // @synthesize selectedItem=_selectedItem;
@property(retain, nonatomic) NSArray *phraseArray; // @synthesize phraseArray=_phraseArray;
@property(copy, nonatomic) CDUnknownBlockType changedBlock; // @synthesize changedBlock=_changedBlock;
@property(copy, nonatomic) NSString *selectedPhrase; // @synthesize selectedPhrase=_selectedPhrase;
- (void).cxx_destruct;
- (void)buildDataSource;
- (void)onSavePressed:(id)arg1;
- (void)quit;
- (void)didReceiveMemoryWarning;
- (void)viewDidLoad;

@end

