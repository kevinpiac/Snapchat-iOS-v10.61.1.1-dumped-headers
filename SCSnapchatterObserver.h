//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCSnapchattersFetchedResultLookup-Protocol.h"

@class SCDocObjectObserver;

@interface SCSnapchatterObserver : NSObject <SCSnapchattersFetchedResultLookup>
{
    SCDocObjectObserver *_observer;
}

- (void).cxx_destruct;
- (id)initWithDocObjectContext:(id)arg1 fetchBlock:(CDUnknownBlockType)arg2;
- (id)snapchatter;
- (id)snapchatterWithUserId:(id)arg1;
- (id)snapchatterWithUsername:(id)arg1;

@end

