//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSDictionary, SCR2SearchRequest, SCRequest, SCSearchCachedRequestManager, SCSearchQuery, SCSearchResultSectionDescriptor, SCSearchSession;

@protocol SCLensExplorerSearchSessionProtocol <NSObject>
- (double)delayForQuery:(SCSearchQuery *)arg1;
@property(readonly, nonatomic) SCSearchResultSectionDescriptor *loadingSectionDescriptor;
- (_Bool)locationAuthorized;
@property(readonly, nonatomic) SCSearchResultSectionDescriptor *noResultSectionDescriptor;
- (SCRequest *)requestForQuery:(SCSearchQuery *)arg1;
@property(readonly, nonatomic) SCSearchCachedRequestManager *requestManager;
- (SCR2SearchRequest *)searchRequestForQuery:(SCSearchQuery *)arg1;
@property(readonly, nonatomic) SCSearchSession *searchSession;
@property(readonly, nonatomic) NSDictionary *sectionParsers;
@end

