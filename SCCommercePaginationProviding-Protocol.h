//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCEventAnnouncing-Protocol.h"

@class NSArray;

@protocol SCCommercePaginationProviding <SCEventAnnouncing>
@property(readonly) _Bool canLoadMorePages;
- (void)clearError;
@property(readonly) long long currentPage;
@property(readonly) NSArray *items;
@property(readonly) long long nextPage;
- (void)reset;
@end
