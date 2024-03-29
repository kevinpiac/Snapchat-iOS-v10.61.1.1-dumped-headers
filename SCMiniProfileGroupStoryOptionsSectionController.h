//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCMiniProfileSectionController.h"

#import "SCMiniProfileGroupStoryOptionRowControllerDelegate-Protocol.h"

@class NSArray, NSString;
@protocol SCMiniProfileGroupStoryOptionsSectionControllerDelegate;

@interface SCMiniProfileGroupStoryOptionsSectionController : SCMiniProfileSectionController <SCMiniProfileGroupStoryOptionRowControllerDelegate>
{
    NSArray *_options;
    id <SCMiniProfileGroupStoryOptionsSectionControllerDelegate> _delegate;
}

- (void).cxx_destruct;
- (void)groupStoryOptionRowControllerDidSelect:(id)arg1;
- (id)initWithDelegate:(id)arg1 options:(id)arg2;
- (long long)numberOfRows;
- (id)rowControllerAtIndex:(long long)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

