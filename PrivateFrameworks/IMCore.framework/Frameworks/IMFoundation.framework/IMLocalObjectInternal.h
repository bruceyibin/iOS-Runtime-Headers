/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/IMCore.framework/Frameworks/IMFoundation.framework/IMFoundation
 */

@class NSString, NSRecursiveLock, NSLock, NSMutableArray, NSProtocolChecker;

@interface IMLocalObjectInternal : NSObject  {
    NSRecursiveLock *_lock;
    id _target;
    unsigned int _port;
    struct dispatch_source_s { } *_source;
    struct dispatch_queue_s { } *_queue;
    struct dispatch_semaphore_s { } *_deathLock;
    NSString *_portName;
    NSProtocolChecker *_protocolChecker;
    int _pid;
    NSMutableArray *_componentQueue;
    NSLock *_componentQueueLock;
    NSRecursiveLock *_componentQueueProcessingLock;
    BOOL _pendingComponentQueueProcessing;
    BOOL _busyForwarding;
}


- (void)dealloc;

@end