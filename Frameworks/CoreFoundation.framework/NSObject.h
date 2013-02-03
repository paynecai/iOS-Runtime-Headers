/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CoreFoundation.framework/CoreFoundation
 */

@interface NSObject <NSObject> {
    Class isa;
}

@property(readonly) BOOL hasPanoramaID;

+ (int (*)())CA_getterForType:(NSInteger)arg1;
+ (int (*)())CA_setterForType:(NSInteger)arg1;
+ (int (*)())instanceMethodForSelector:(SEL)arg1;
+ (int (*)())methodForSelector:(SEL)arg1;
+ (id)_copyDescription;
+ (id)_createMutableArrayValueGetterWithContainerClassID:(id)arg1 key:(id)arg2;
+ (id)_createMutableSetValueGetterWithContainerClassID:(id)arg1 key:(id)arg2;
+ (id)_createOtherValueGetterWithContainerClassID:(id)arg1 key:(id)arg2;
+ (id)_createOtherValueSetterWithContainerClassID:(id)arg1 key:(id)arg2;
+ (id)_createValueGetterWithContainerClassID:(id)arg1 key:(id)arg2;
+ (id)_createValuePrimitiveGetterWithContainerClassID:(id)arg1 key:(id)arg2;
+ (id)_createValuePrimitiveSetterWithContainerClassID:(id)arg1 key:(id)arg2;
+ (id)_createValueSetterWithContainerClassID:(id)arg1 key:(id)arg2;
+ (id)_keysForValuesAffectingValueForKey:(id)arg1;
+ (BOOL)_shouldAddObservationForwardersForKey:(id)arg1;
+ (BOOL)accessInstanceVariablesDirectly;
+ (id)alloc;
+ (id)allocWithZone:(struct _NSZone { }*)arg1;
+ (BOOL)automaticallyNotifiesObserversForKey:(id)arg1;
+ (id)autorelease;
+ (void)cancelPreviousPerformRequestsWithNonRetainedTarget:(id)arg1 selector:(SEL)arg2 object:(id)arg3;
+ (void)cancelPreviousPerformRequestsWithNonRetainedTarget:(id)arg1;
+ (void)cancelPreviousPerformRequestsWithTarget:(id)arg1 selector:(SEL)arg2 object:(id)arg3;
+ (void)cancelPreviousPerformRequestsWithTarget:(id)arg1;
+ (Class)class;
+ (id)classFallbacksForKeyedArchiver;
+ (Class)classForKeyedUnarchiver;
+ (void)clearLocks;
+ (BOOL)conformsToProtocol:(id)arg1;
+ (id)copy;
+ (id)copyWithZone:(struct _NSZone { }*)arg1;
+ (void)dealloc;
+ (id)debugDescription;
+ (id)description;
+ (void)doesNotRecognizeSelector:(SEL)arg1;
+ (void)finalize;
+ (void)forwardInvocation:(id)arg1;
+ (id)forwardingTargetForSelector:(SEL)arg1;
+ (NSUInteger)hash;
+ (BOOL)implementsSelector:(SEL)arg1;
+ (void)initialize;
+ (void)initialize;
+ (id)instanceMethodSignatureForSelector:(SEL)arg1;
+ (BOOL)instancesImplementSelector:(SEL)arg1;
+ (BOOL)instancesRespondToSelector:(SEL)arg1;
+ (BOOL)isAncestorOfObject:(id)arg1;
+ (BOOL)isEqual:(id)arg1;
+ (BOOL)isFault;
+ (BOOL)isKeyExcludedFromWebScript:(const char *)arg1;
+ (BOOL)isKindOfClass:(Class)arg1;
+ (BOOL)isMemberOfClass:(Class)arg1;
+ (BOOL)isProxy;
+ (BOOL)isSelectorExcludedFromWebScript:(SEL)arg1;
+ (BOOL)isSubclassOfClass:(Class)arg1;
+ (id)keyPathsForValuesAffectingValueForKey:(id)arg1;
+ (void)load;
+ (void)load;
+ (id)methodSignatureForSelector:(SEL)arg1;
+ (id)mutableCopy;
+ (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
+ (id)new;
+ (BOOL)overridesClassMethod:(SEL)arg1;
+ (id)performSelector:(SEL)arg1 withObject:(id)arg2 withObject:(id)arg3;
+ (id)performSelector:(SEL)arg1 withObject:(id)arg2;
+ (id)performSelector:(SEL)arg1;
+ (void)performSelectorWithNonRetainedTarget:(id)arg1 selector:(SEL)arg2 withObject:(id)arg3 afterDelay:(double)arg4;
+ (oneway void)release;
+ (BOOL)resolveClassMethod:(SEL)arg1;
+ (BOOL)resolveInstanceMethod:(SEL)arg1;
+ (BOOL)respondsToSelector:(SEL)arg1;
+ (id)retain;
+ (NSUInteger)retainCount;
+ (id)self;
+ (void)setKeys:(id)arg1 triggerChangeNotificationsForDependentKey:(id)arg2;
+ (void)setVersion:(NSInteger)arg1;
+ (Class)superclass;
+ (NSInteger)version;
+ (struct _NSZone { }*)zone;

- (int (*)())methodForSelector:(SEL)arg1;
- (id)CA_addValue:(id)arg1 multipliedBy:(NSInteger)arg2;
- (void*)CA_copyRenderValue;
- (float)CA_distanceToValue:(id)arg1;
- (id)CA_interpolateValue:(id)arg1 byFraction:(float)arg2;
- (void)_addObserver:(id)arg1 forProperty:(id)arg2 options:(NSUInteger)arg3 context:(void*)arg4;
- (unsigned long)_cfTypeID;
- (id)_copyDescription;
- (void)_didChangeValuesForKeys:(id)arg1;
- (id)_implicitObservationInfo;
- (BOOL)_isKVOA;
- (void)_nonRetainingPerformSelector:(SEL)arg1 withObject:(id)arg2 afterDelay:(double)arg3 inModes:(id)arg4;
- (void)_notifyObserversForKeyPath:(id)arg1 change:(id)arg2;
- (void)_removeObserver:(id)arg1 forProperty:(id)arg2;
- (void)_vers_dyna_maptop_fin;
- (void)_vers_dyna_maptop_setid:(id)arg1;
- (void)_willChangeValuesForKeys:(id)arg1;
- (void)addObserver:(id)arg1 forKeyPath:(id)arg2 options:(NSUInteger)arg3 context:(void*)arg4;
- (void)allowSafePerformSelector;
- (id)autorelease;
- (id)autorelease;
- (id)awakeAfterUsingCoder:(id)arg1;
- (void)awakeFromNib;
- (long)becomeActive;
- (long)becomeInactive;
- (Class)class;
- (Class)classForArchiver;
- (Class)classForCoder;
- (Class)classForKeyedArchiver;
- (BOOL)conformsToProtocol:(id)arg1;
- (id)copy;
- (void)dealloc;
- (void)dealloc;
- (id)debugDescription;
- (id)description;
- (id)dictionaryWithValuesForKeys:(id)arg1;
- (void)didChange:(NSUInteger)arg1 valuesAtIndexes:(id)arg2 forKey:(id)arg3;
- (void)didChangeValueForKey:(id)arg1 withSetMutation:(NSUInteger)arg2 usingObjects:(id)arg3;
- (void)didChangeValueForKey:(id)arg1;
- (void)disallowSafePerformSelector;
- (void)doesNotRecognizeSelector:(SEL)arg1;
- (void)finalize;
- (void)forwardInvocation:(id)arg1;
- (id)forwardingTargetForSelector:(SEL)arg1;
- (void)fromMainThreadPostNotificationName:(id)arg1 object:(id)arg2 userInfo:(id)arg3;
- (void)fromNotifySafeThreadPerformSelector:(SEL)arg1 withObject:(id)arg2;
- (void)fromNotifySafeThreadPostNotificationName:(id)arg1 object:(id)arg2 userInfo:(id)arg3;
- (BOOL)hasPanoramaID;
- (NSUInteger)hash;
- (BOOL)implementsSelector:(SEL)arg1;
- (id)init;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isFault;
- (BOOL)isKindOfClass:(Class)arg1;
- (BOOL)isLocked;
- (BOOL)isMemberOfClass:(Class)arg1;
- (BOOL)isNSArray__;
- (BOOL)isNSData__;
- (BOOL)isNSDate__;
- (BOOL)isNSDictionary__;
- (BOOL)isNSNumber__;
- (BOOL)isNSSet__;
- (BOOL)isNSString__;
- (BOOL)isNSValue__;
- (BOOL)isProxy;
- (void)lock;
- (void)lockWithPriority;
- (id)methodSignatureForSelector:(SEL)arg1;
- (id)mutableArrayValueForKey:(id)arg1;
- (id)mutableArrayValueForKeyPath:(id)arg1;
- (id)mutableCopy;
- (id)mutableSetValueForKey:(id)arg1;
- (id)mutableSetValueForKeyPath:(id)arg1;
- (void*)observationInfo;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (BOOL)okToNotifyFromThisThread;
- (void)performOnewaySelectorInMainThread:(SEL)arg1 withObject:(id)arg2 withObject:(id)arg3;
- (void)performOnewaySelectorInMainThread:(SEL)arg1 withObject:(id)arg2;
- (void)performSelector:(SEL)arg1 object:(id)arg2 afterDelay:(double)arg3;
- (void)performSelector:(SEL)arg1 onThread:(id)arg2 withObject:(id)arg3 waitUntilDone:(BOOL)arg4 modes:(id)arg5;
- (void)performSelector:(SEL)arg1 onThread:(id)arg2 withObject:(id)arg3 waitUntilDone:(BOOL)arg4;
- (void)performSelector:(SEL)arg1 withObject:(id)arg2 afterDelay:(double)arg3 inModes:(id)arg4;
- (void)performSelector:(SEL)arg1 withObject:(id)arg2 afterDelay:(double)arg3;
- (id)performSelector:(SEL)arg1 withObject:(id)arg2 withObject:(id)arg3;
- (id)performSelector:(SEL)arg1 withObject:(id)arg2;
- (id)performSelector:(SEL)arg1;
- (void)performSelectorInBackground:(SEL)arg1 withObject:(id)arg2;
- (void)performSelectorInMainThread:(SEL)arg1 withObject:(id)arg2 withObject:(id)arg3;
- (void)performSelectorInMainThread:(SEL)arg1 withObject:(id)arg2;
- (void)performSelectorInMainThread:(SEL)arg1;
- (void)performSelectorOnMainThread:(SEL)arg1 withObject:(id)arg2 waitUntilDone:(BOOL)arg3 modes:(id)arg4;
- (void)performSelectorOnMainThread:(SEL)arg1 withObject:(id)arg2 waitUntilDone:(BOOL)arg3;
- (void)postNotificationWithDescription:(id)arg1;
- (oneway void)release;
- (void)releaseOnMainThread;
- (void)removeObserver:(id)arg1 forKeyPath:(id)arg2;
- (id)replacementObjectForArchiver:(id)arg1;
- (id)replacementObjectForCoder:(id)arg1;
- (id)replacementObjectForKeyedArchiver:(id)arg1;
- (BOOL)respondsToSelector:(SEL)arg1;
- (id)retain;
- (NSUInteger)retainCount;
- (id)self;
- (void)setNilValueForKey:(id)arg1;
- (void)setObservationInfo:(void*)arg1;
- (void)setValue:(id)arg1 forKey:(id)arg2;
- (void)setValue:(id)arg1 forKeyPath:(id)arg2;
- (void)setValue:(id)arg1 forUndefinedKey:(id)arg2;
- (void)setValuesForKeysWithDictionary:(id)arg1;
- (Class)superclass;
- (BOOL)tryLock;
- (BOOL)tryLockWithPriority;
- (void)unlock;
- (BOOL)validateValue:(id*)arg1 forKey:(id)arg2 error:(id*)arg3;
- (BOOL)validateValue:(id*)arg1 forKeyPath:(id)arg2 error:(id*)arg3;
- (id)valueForKey:(id)arg1;
- (id)valueForKeyPath:(id)arg1;
- (id)valueForUndefinedKey:(id)arg1;
- (void)willChange:(NSUInteger)arg1 valuesAtIndexes:(id)arg2 forKey:(id)arg3;
- (void)willChangeValueForKey:(id)arg1 withSetMutation:(NSUInteger)arg2 usingObjects:(id)arg3;
- (void)willChangeValueForKey:(id)arg1;
- (void)yieldLock;
- (struct _NSZone { }*)zone;

@end