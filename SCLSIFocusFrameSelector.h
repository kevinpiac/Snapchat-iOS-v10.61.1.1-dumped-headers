//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCLSIFrameSelector-Protocol.h"

@class SCLSIFocusFrame;

@interface SCLSIFocusFrameSelector : NSObject <SCLSIFrameSelector>
{
    SCLSIFocusFrame *_bestFrame;
}

- (void).cxx_destruct;
- (void)addCandidateFrame:(id)arg1;
- (void)reset;
- (id)selectedFrame;

@end

