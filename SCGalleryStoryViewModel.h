//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSSet, SCMergedGalleryDataSource;
@protocol SCGalleryEntry;

@interface SCGalleryStoryViewModel : NSObject
{
    SCMergedGalleryDataSource *_dataSource;
    long long _snapsCount;
    NSSet *_highlightedSnapIds;
    NSArray *_snaps;
    id <SCGalleryEntry> _entry;
    long long _page;
}

+ (id)dispatchQueue;
- (void).cxx_destruct;
@property(readonly, nonatomic) id <SCGalleryEntry> entry; // @synthesize entry=_entry;
- (_Bool)hasMore:(long long)arg1;
@property(readonly, nonatomic) NSSet *highlightedSnapIds; // @synthesize highlightedSnapIds=_highlightedSnapIds;
- (id)initWithEntry:(id)arg1 dataSource:(id)arg2 page:(long long)arg3;
- (_Bool)isCompatible;
- (_Bool)isExpanded;
@property(nonatomic) long long page; // @synthesize page=_page;
@property(readonly, nonatomic) NSArray *snaps; // @synthesize snaps=_snaps;
@property(readonly, nonatomic) long long snapsCount; // @synthesize snapsCount=_snapsCount;
- (void)toggleExpand;

@end

