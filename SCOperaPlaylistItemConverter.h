//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCOperaPlaylistItemGroupResolver-Protocol.h"
#import "SCOperaPlaylistItemMediaPreparationController-Protocol.h"

@class NSArray, NSDictionary, NSString;
@protocol SCOperaPlaylistItemExtraPropertiesProvider;

@interface SCOperaPlaylistItemConverter : NSObject <SCOperaPlaylistItemGroupResolver, SCOperaPlaylistItemMediaPreparationController>
{
    NSDictionary *_mediaTypeConfigurations;
    NSArray<SCOperaPlaylistItemExtraPropertiesProvider> *_extraPropertiesProviders;
}

- (void).cxx_destruct;
- (id)dataModelForGroup:(id)arg1;
- (id)dataModelForItem:(id)arg1;
- (id)initWithMediaTypeConfigurations:(id)arg1 extraPropertiesProviders:(id)arg2;
- (void)loadMediaForPlaylistItemGroup:(id)arg1;
- (void)pagePropertiesForItem:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)playlistItemGroupForDataModel:(id)arg1;
- (void)prepareMediaForItem:(id)arg1 waitForDownloading:(_Bool)arg2 startWaitingForDownloadCallback:(CDUnknownBlockType)arg3 completion:(CDUnknownBlockType)arg4;
- (void)removeMediaForItem:(id)arg1;
- (void)resolvePlaylistItemGroup:(id)arg1;
- (void)teardownViewModelForItem:(id)arg1;
- (void)unresolvePlaylistItemGroup:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

