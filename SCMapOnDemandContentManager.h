//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, SCRequestManager;

@interface SCMapOnDemandContentManager : NSObject
{
    NSMutableDictionary *_completionsForContentReuseKeys;
    SCRequestManager *_requestManager;
}

- (void).cxx_destruct;
- (void)fetchAssetIfNeeded:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)initWithRequestManager:(id)arg1;
@property(readonly, nonatomic) SCRequestManager *requestManager; // @synthesize requestManager=_requestManager;

@end
