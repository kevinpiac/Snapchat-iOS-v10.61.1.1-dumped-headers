//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class SCMiniProfileSectionsView;

@interface SCMiniProfileRowController : NSObject
{
    SCMiniProfileSectionsView *_sectionsView;
}

- (void).cxx_destruct;
- (double)additionalSidePadding;
- (Class)cellClass;
- (double)cellHeight;
- (void)didEndDisplayingCell:(id)arg1;
- (void)didSelectCell;
- (void)reloadAllSections;
- (id)reuseIdentifier;
- (void)setSectionsView:(id)arg1;
- (_Bool)shouldSelectCell;
- (void)willDisplayCell:(id)arg1;

@end

