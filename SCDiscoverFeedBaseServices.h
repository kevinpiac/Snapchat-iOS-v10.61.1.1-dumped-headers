//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class SCLazy;
@protocol SCEventAnnouncing;

@interface SCDiscoverFeedBaseServices : NSObject
{
    SCLazy *_collapseManager;
    id <SCEventAnnouncing> _eventsAnnouncer;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) SCLazy *collapseManager; // @synthesize collapseManager=_collapseManager;
@property(readonly, nonatomic) id <SCEventAnnouncing> eventsAnnouncer; // @synthesize eventsAnnouncer=_eventsAnnouncer;
- (id)initWithCollapseManager:(id)arg1 eventAnnouncer:(id)arg2;

@end

