//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCMiniProfileSectionController.h"

@protocol SCMiniProfileDoodleOptionsSectionControllerDelegate;

@interface SCMiniProfileDoodleOptionsSectionController : SCMiniProfileSectionController
{
    id <SCMiniProfileDoodleOptionsSectionControllerDelegate> _delegate;
    _Bool _allowSaving;
}

- (void).cxx_destruct;
- (void)_deleteTapped;
- (long long)_optionFromRowIndex:(long long)arg1;
- (void)_saveTapped;
- (id)initWithDelegate:(id)arg1 allowSaving:(_Bool)arg2;
- (long long)numberOfRows;
- (id)rowControllerAtIndex:(long long)arg1;

@end

