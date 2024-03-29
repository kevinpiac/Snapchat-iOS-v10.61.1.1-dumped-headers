//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSIndexSet, NSSet;

@interface IGListBatchUpdateData : NSObject
{
    NSIndexSet *_insertSections;
    NSIndexSet *_deleteSections;
    NSSet *_moveSections;
    NSArray *_insertIndexPaths;
    NSArray *_deleteIndexPaths;
    NSArray *_moveIndexPaths;
}

+ (void)_cleanIndexPathsWithMap:(const unordered_map_6fea4092 *)arg1 moves:(id)arg2 indexPaths:(id)arg3 deletes:(id)arg4 inserts:(id)arg5;
- (void).cxx_destruct;
- (id)debugDescriptionLines;
@property(readonly, nonatomic) NSArray *deleteIndexPaths; // @synthesize deleteIndexPaths=_deleteIndexPaths;
@property(readonly, nonatomic) NSIndexSet *deleteSections; // @synthesize deleteSections=_deleteSections;
- (id)description;
- (id)initWithInsertSections:(id)arg1 deleteSections:(id)arg2 moveSections:(id)arg3 insertIndexPaths:(id)arg4 deleteIndexPaths:(id)arg5 moveIndexPaths:(id)arg6;
@property(readonly, nonatomic) NSArray *insertIndexPaths; // @synthesize insertIndexPaths=_insertIndexPaths;
@property(readonly, nonatomic) NSIndexSet *insertSections; // @synthesize insertSections=_insertSections;
@property(readonly, nonatomic) NSArray *moveIndexPaths; // @synthesize moveIndexPaths=_moveIndexPaths;
@property(readonly, nonatomic) NSSet *moveSections; // @synthesize moveSections=_moveSections;

@end

