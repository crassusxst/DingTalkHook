//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "DTSearchMoreBaseViewController.h"

@class DTSearchLog;

@interface DTSearchMoreSpaceResultsViewController : DTSearchMoreBaseViewController
{
    DTSearchLog *_searchLog;
}

@property(retain) DTSearchLog *searchLog; // @synthesize searchLog=_searchLog;
- (void).cxx_destruct;
- (void)dt_searchDataWithSearchText:(id)arg1 offset:(long long)arg2 size:(long long)arg3;
- (void)searchDataWithSearchText:(id)arg1 offset:(long long)arg2 size:(long long)arg3;
- (void)showsSearchResult:(id)arg1 withSearchText:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (void)setSearchText:(id)arg1;

@end

