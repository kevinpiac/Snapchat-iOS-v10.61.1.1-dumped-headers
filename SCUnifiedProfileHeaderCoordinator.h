//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCUnifiedProfileHeaderDataProvidingDelegate-Protocol.h"

@class SCUnifiedProfileHeaderView;
@protocol SCPerforming, SCUnifiedProfileHeaderDataProviding;

@interface SCUnifiedProfileHeaderCoordinator : NSObject <SCUnifiedProfileHeaderDataProvidingDelegate>
{
    SCUnifiedProfileHeaderView *_headerView;
    id <SCUnifiedProfileHeaderDataProviding> _headerDataProvider;
    id <SCPerforming> _dataUpdatePerformer;
}

- (void).cxx_destruct;
- (void)_updateHeaderViewWithDataProvider;
- (void)_updateHeaderViewWithViewModel:(id)arg1;
- (void)dataProviderDidUpdate:(id)arg1;
- (id)initWithHeaderView:(id)arg1 headerDataProvider:(id)arg2;

@end

