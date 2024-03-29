//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, SCUserSession;

@interface SCCommerceLineItemArtifactManager : NSObject
{
    SCUserSession *_userSession;
    NSMutableDictionary *_artifactRequests;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableDictionary *artifactRequests; // @synthesize artifactRequests=_artifactRequests;
- (void)cancelArtifactRequestForLineItem:(id)arg1;
- (void)getArtifactsForLineItem:(id)arg1 partialCompletionBlock:(CDUnknownBlockType)arg2 fullCompletionBlock:(CDUnknownBlockType)arg3 failureBlock:(CDUnknownBlockType)arg4;
- (id)initWithUserSession:(id)arg1;
- (_Bool)isGettingArtifactsForLineItem:(id)arg1;
@property(retain, nonatomic) SCUserSession *userSession; // @synthesize userSession=_userSession;

@end

