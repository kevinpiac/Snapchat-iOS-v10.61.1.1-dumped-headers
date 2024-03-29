//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCUpdateAnnouncing-Protocol.h"

@class NSDate, NSMutableArray, NSMutableDictionary, NSString, SCUpdateListenerAnnouncer;
@protocol SCCache, SCPerforming;

@interface SCLensExplorerBaseDataStore : NSObject <SCUpdateAnnouncing>
{
    id <SCCache> _cache;
    NSDate *_expiration;
    NSString *_cacheKey;
    NSMutableArray *_itemsOrder;
    NSMutableDictionary *_items;
    SCUpdateListenerAnnouncer *_updateAnnouncer;
    id <SCPerforming> _performer;
}

+ (id)announcerIdentifier;
- (void).cxx_destruct;
- (void)_appendItem:(id)arg1;
- (void)_updateItemsWithNewItems:(id)arg1;
- (void)addUpdateListener:(id)arg1;
- (id)allItems;
- (void)appendItem:(id)arg1;
- (void)appendItems:(id)arg1;
- (id)initWithCache:(id)arg1 expiration:(id)arg2 cacheKey:(id)arg3 performer:(id)arg4;
- (id)itemWithId:(id)arg1;
- (void)loadItemsFromDiskWithCompletion:(CDUnknownBlockType)arg1;
@property(readonly, nonatomic) id <SCPerforming> performer; // @synthesize performer=_performer;
- (void)removeAllItems;
- (void)removeUpdateListener:(id)arg1;
- (void)saveItemsToDisk;
- (void)updateItems:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

