//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCSnapchattersFetchedResultObserver-Protocol.h"

@class SCDocObjectFetchedResultObserver;

@interface SCSnapchattersAToZObserver : NSObject <SCSnapchattersFetchedResultObserver>
{
    SCDocObjectFetchedResultObserver *_fetchedResultObserver;
}

- (void).cxx_destruct;
- (void)beginObservationWithStartupGuard:(_Bool)arg1;
- (id)initWithSnapchattersFetchedResultObserver:(id)arg1;
- (struct NSDictionary *)snapchatterAToZMap;
- (id)snapchatterFetchedResult;

@end

