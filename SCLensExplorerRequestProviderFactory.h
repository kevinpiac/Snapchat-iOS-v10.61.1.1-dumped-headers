//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class SCLensExplorerEventsControllerManager;
@protocol SCLensExplorerDependencyProviderProtocol;

@interface SCLensExplorerRequestProviderFactory : NSObject
{
    id <SCLensExplorerDependencyProviderProtocol> _dependencyProvider;
    SCLensExplorerEventsControllerManager *_eventsControllerManager;
}

- (void).cxx_destruct;
- (id)initWithDependencyProvider:(id)arg1 eventsControllerManager:(id)arg2;
- (id)lensItemsRequestProvider;

@end

