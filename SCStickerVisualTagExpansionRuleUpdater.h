//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary, NSString, SCQueuePerformer;

@interface SCStickerVisualTagExpansionRuleUpdater : NSObject
{
    struct mutex _mutex;
    SCQueuePerformer *_performer;
    NSDictionary *_visualTagExpansionRule;
    NSString *_versionHash;
    _Bool _isRuleUpdated;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (id)_fileURL;
- (void)_saveToFile:(id)arg1 eTag:(id)arg2;
- (void)_updateFromFile;
- (void)fetchRulesFromServer;
- (id)init;
- (id)visualTagExpansionRule;

@end

