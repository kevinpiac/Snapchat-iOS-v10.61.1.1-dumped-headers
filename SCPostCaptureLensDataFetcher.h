//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCPostCaptureLensDataFetcherProtocol-Protocol.h"

@class NSString, SCLensDataFetcher;
@protocol SCPerforming;

@interface SCPostCaptureLensDataFetcher : NSObject <SCPostCaptureLensDataFetcherProtocol>
{
    SCLensDataFetcher *_lensDataFetcher;
    id <SCPerforming> _performer;
}

+ (id)_fetcherErrorWithCode:(long long)arg1 message:(id)arg2;
+ (id)_postCaptureLensFromFilterId:(id)arg1 postCaptureLensData:(id)arg2;
- (void).cxx_destruct;
- (void)fetchPostCaptureLensForFilterId:(id)arg1 postCaptureLensData:(id)arg2 completionPerformer:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (id)initWithLensDataFetcher:(id)arg1 performer:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
