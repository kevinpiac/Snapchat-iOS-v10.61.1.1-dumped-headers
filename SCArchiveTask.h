//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class SCArchiveItem;
@protocol SCArchiveTaskDelegate;

@interface SCArchiveTask : NSObject
{
    id <SCArchiveTaskDelegate> _delegate;
    CDUnknownBlockType _failureBlock;
    SCArchiveItem *_item;
    CDUnknownBlockType _successBlock;
}

+ (id)createTask:(id)arg1 delegate:(id)arg2 successBlock:(CDUnknownBlockType)arg3 failureBlock:(CDUnknownBlockType)arg4;
- (void).cxx_destruct;
@property(nonatomic) __weak id <SCArchiveTaskDelegate> delegate; // @synthesize delegate=_delegate;
@property(copy, nonatomic) CDUnknownBlockType failureBlock; // @synthesize failureBlock=_failureBlock;
- (id)initWithItem:(id)arg1 delegate:(id)arg2 successBlock:(CDUnknownBlockType)arg3 failureBlock:(CDUnknownBlockType)arg4;
@property(retain, nonatomic) SCArchiveItem *item; // @synthesize item=_item;
- (void)runOnQueue:(id)arg1;
@property(copy, nonatomic) CDUnknownBlockType successBlock; // @synthesize successBlock=_successBlock;

@end

