//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCOperaPlaylistFetcher-Protocol.h"

@class NSArray, NSString;
@protocol SCOperaPlaylistFetcherDelegate;

@interface SCImpalaStoryPlayerPlaylistFetcher : NSObject <SCOperaPlaylistFetcher>
{
    CDUnknownBlockType _dataModelProvider;
    unsigned long long _loadingState;
    NSArray *_resolvedDataModels;
    unsigned long long _startingIndex;
    id <SCOperaPlaylistFetcherDelegate> _delegate;
}

- (void).cxx_destruct;
- (void)_resolveWithDataModels:(id)arg1 startingIndex:(long long)arg2 error:(id)arg3;
- (void)_setLoadingState:(unsigned long long)arg1;
- (id)currentLoadingProperties;
@property(nonatomic) __weak id <SCOperaPlaylistFetcherDelegate> delegate; // @synthesize delegate=_delegate;
- (void)fetchPlaylist;
- (id)firstDisplayGroupDataModel;
- (id)initWithDataModelProvider:(CDUnknownBlockType)arg1;
- (unsigned long long)loadingState;
- (id)resolvedDataModels;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
