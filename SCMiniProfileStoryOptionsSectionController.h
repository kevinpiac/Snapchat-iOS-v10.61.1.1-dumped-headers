//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCMiniProfileSectionController.h"

#import "SCMiniProfileStoryOptionRowControllerDelegate-Protocol.h"

@class NSArray, NSString;
@protocol SCMiniProfileStoryOptionsSectionControllerDelegate;

@interface SCMiniProfileStoryOptionsSectionController : SCMiniProfileSectionController <SCMiniProfileStoryOptionRowControllerDelegate>
{
    NSArray *_options;
    id <SCMiniProfileStoryOptionsSectionControllerDelegate> _delegate;
    NSString *_name;
}

- (void).cxx_destruct;
- (id)initWithDelegate:(id)arg1 options:(id)arg2 name:(id)arg3;
@property(readonly, nonatomic) NSString *name; // @synthesize name=_name;
- (long long)numberOfRows;
- (id)rowControllerAtIndex:(long long)arg1;
- (void)storyOptionRowControllerDidSelect:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

