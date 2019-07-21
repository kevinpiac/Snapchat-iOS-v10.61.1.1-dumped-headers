//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSIndexPath;

@interface SCChatViewModelVerticalLayoutProperties : NSObject
{
    double _tableHeight;
    double _heightOfContentBelowTheFold;
    double _belowTheFoldOffset;
    double _previewOffset;
    NSIndexPath *_firstBelowTheFoldIndexPath;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) double belowTheFoldOffset; // @synthesize belowTheFoldOffset=_belowTheFoldOffset;
- (id)description;
@property(readonly, nonatomic) NSIndexPath *firstBelowTheFoldIndexPath; // @synthesize firstBelowTheFoldIndexPath=_firstBelowTheFoldIndexPath;
@property(readonly, nonatomic) double heightOfContentBelowTheFold; // @synthesize heightOfContentBelowTheFold=_heightOfContentBelowTheFold;
- (id)initWithTableHeight:(double)arg1 heightOfContentBelowTheFold:(double)arg2 belowTheFoldOffset:(double)arg3 previewOffset:(double)arg4 firstBelowTheFoldIndexPath:(id)arg5;
@property(readonly, nonatomic) double previewOffset; // @synthesize previewOffset=_previewOffset;
@property(readonly, nonatomic) double tableHeight; // @synthesize tableHeight=_tableHeight;

@end

