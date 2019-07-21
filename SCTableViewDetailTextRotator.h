//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMapTable;
@protocol OS_dispatch_source;

@interface SCTableViewDetailTextRotator : NSObject
{
    NSMapTable *_cellAuxTextInfo;
    NSObject<OS_dispatch_source> *_auxTextRotationTimer;
}

- (void).cxx_destruct;
- (void)_rotateCellsForTextState:(_Bool)arg1;
- (void)addAuxTextForCell:(id)arg1 primaryText:(id)arg2 secondaryText:(id)arg3;
- (id)init;
- (void)removeCell:(id)arg1;

@end
