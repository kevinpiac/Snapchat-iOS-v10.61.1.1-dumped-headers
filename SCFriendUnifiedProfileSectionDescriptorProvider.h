//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCTraceEnabled-Protocol.h"
#import "SCUnifiedProfileSectionDescriptorProviding-Protocol.h"
#import "SCUpdateListener-Protocol.h"

@class NSString, SCExperimentManager, SCFriendUnifiedProfileDataSource;
@protocol SCUnifiedProfileSectionDescriptorProvidingDelegate;

@interface SCFriendUnifiedProfileSectionDescriptorProvider : NSObject <SCUpdateListener, SCTraceEnabled, SCUnifiedProfileSectionDescriptorProviding>
{
    _Bool _isMutualFriendsOnInitialization;
    _Bool _showMap;
    SCExperimentManager *_experimentManager;
    SCFriendUnifiedProfileDataSource *_dataSource;
    id <SCUnifiedProfileSectionDescriptorProvidingDelegate> _delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <SCUnifiedProfileSectionDescriptorProvidingDelegate> delegate; // @synthesize delegate=_delegate;
- (void)didUpdateWithAnnouncerIdentifier:(id)arg1;
- (void)fetchSectionDescriptors:(CDUnknownBlockType)arg1;
- (id)initWithDataSource:(id)arg1 showMap:(_Bool)arg2 experimentManager:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

